void print_alphabet()
{
  char letter = 'a';
  while(letter <= 'z')
    {
      _putchar(letter);
      letter++;
    }
  _putchar('\n');
}

int main(void)
{
  print_alphabet();
  return (0);
}
