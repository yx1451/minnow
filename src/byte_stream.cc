#include "byte_stream.hh"

using namespace std;

ByteStream::ByteStream( uint64_t capacity ) : capacity_( capacity ) {}

bool Writer::is_closed() const
{
  // Your code here.
 return {end_wrt};
}

void Writer::push( string data )
{
  // Your code here.
  for(auto i = 0;i < data.size();i ++)
  {
    if(available_capacity() > 0)
    {buf_.push(data[i]);
    pusheddt_ ++ ;}
  }
  (void) data;
  return;
}

void Writer::close()
{
  // Your code here.
  end_wrt = true;
}

uint64_t Writer::available_capacity() const
{
  // Your code here.
  return {capacity_ - buf_.size()};
}

uint64_t Writer::bytes_pushed() const
{
  // Your code here.
  return {pusheddt_};
}

bool Reader::is_finished() const
{
  // Your code here.
  if(bytes_buffered() == 0 && end_wrt == true) return true;
  else return {false};
}

uint64_t Reader::bytes_popped() const
{
  // Your code here.
  return {popeddt_};
}

string_view Reader::peek() const
{
  // Your code here.
  return {string_view(&buf_.front(),1)};
}

void Reader::pop( uint64_t len )
{
  // Your code here.
  while(len > 0)
  {
    len --;
    buf_.pop();
    popeddt_ ++;
  }
  (void)len;
}

uint64_t Reader::bytes_buffered() const
{
  // Your code here.
  return {pusheddt_ - popeddt_};
}
