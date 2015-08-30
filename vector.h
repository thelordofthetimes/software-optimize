class vector_2d
{
public:
  float x, y;

  vector_2d() {}

  vector_2d(float x, float y)
  {
    this->x = x;
    this->y = y;
  }

  vector_2d operator + (vector_2d const &v)
  {
    return vector_2d(this->x + v.x, this->y + v.y);
  }
};
