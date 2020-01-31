#include <iostream>
#include <algorithm>
#include <vector>

class Message {
public:
  Message() = default;
  explicit Message(const std::string &test, const int id)
      : m_text(test), m_id(id)
  {
  }

  const std::string &get_text() const
  {
    return m_text;
  }

  bool operator<(const Message &message)
  {
    return (m_id < message.m_id) ? true : false;
  }

private:
  std::string m_text;
  int m_id;
};

class MessageFactory {
public:
  MessageFactory()
  {
  }
  Message create_message(const std::string &text)
  {
    Message messageObj = Message(text, ++m_id);

    return messageObj;
  }

private:
  int m_id = 0;
};
