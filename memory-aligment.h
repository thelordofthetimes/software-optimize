struct none_ordering_data
{
  short s;
  double d;
  int i;
};

struct ordering_data
{
  double d;
  int i;
  short s;
};

class none_ordering_class
{
public:
  int i[100];
  int b;
  int read_b() {
    return b;
  }
};

union u
{
  float f;
  int i;
};
