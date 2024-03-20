# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# python
from datetime import datetime
from pathlib import Path
import tomllib

_PROJECT_DIRECTORY = Path(__file__).parent.parent.parent

with open(_PROJECT_DIRECTORY / "pyproject.toml", "rb") as pyproject_file:
    pyproject = tomllib.load(pyproject_file)

# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information

project = "emath"
author = pyproject["tool"]["poetry"]["authors"][0]
copyright = f"2024-{datetime.now().year}, {author}"
release = pyproject["tool"]["poetry"]["version"]

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = []

templates_path = ["_templates"]
exclude_patterns = []


# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output

html_theme = "sphinx_book_theme"
html_static_path = ["_static"]
html_theme_options = {
    "repository_url": "https://github.com/esoma/emath",
    "use_repository_button": True,
}
