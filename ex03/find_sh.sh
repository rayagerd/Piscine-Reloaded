find . -type f -name "*.sh" -exec bash -c 'basename "$0" .sh' {} \;
