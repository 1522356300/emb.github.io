// Generated by gencpp from file std_srvs/EmptyRequest.msg
// DO NOT EDIT!


#ifndef STD_SRVS_MESSAGE_EMPTYREQUEST_H
#define STD_SRVS_MESSAGE_EMPTYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace std_srvs
{
template <class ContainerAllocator>
struct EmptyRequest_
{
  typedef EmptyRequest_<ContainerAllocator> Type;

  EmptyRequest_()
    {
    }
  EmptyRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::std_srvs::EmptyRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::std_srvs::EmptyRequest_<ContainerAllocator> const> ConstPtr;

}; // struct EmptyRequest_

typedef ::std_srvs::EmptyRequest_<std::allocator<void> > EmptyRequest;

typedef boost::shared_ptr< ::std_srvs::EmptyRequest > EmptyRequestPtr;
typedef boost::shared_ptr< ::std_srvs::EmptyRequest const> EmptyRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::std_srvs::EmptyRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::std_srvs::EmptyRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace std_srvs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::std_srvs::EmptyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::std_srvs::EmptyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::std_srvs::EmptyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::std_srvs::EmptyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::std_srvs::EmptyRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::std_srvs::EmptyRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::std_srvs::EmptyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::std_srvs::EmptyRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::std_srvs::EmptyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_srvs/EmptyRequest";
  }

  static const char* value(const ::std_srvs::EmptyRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::std_srvs::EmptyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::std_srvs::EmptyRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::std_srvs::EmptyRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EmptyRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::std_srvs::EmptyRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::std_srvs::EmptyRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // STD_SRVS_MESSAGE_EMPTYREQUEST_H
