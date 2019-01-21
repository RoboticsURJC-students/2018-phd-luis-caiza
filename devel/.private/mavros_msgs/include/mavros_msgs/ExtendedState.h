// Generated by gencpp from file mavros_msgs/ExtendedState.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_EXTENDEDSTATE_H
#define MAVROS_MSGS_MESSAGE_EXTENDEDSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct ExtendedState_
{
  typedef ExtendedState_<ContainerAllocator> Type;

  ExtendedState_()
    : header()
    , vtol_state(0)
    , landed_state(0)  {
    }
  ExtendedState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , vtol_state(0)
    , landed_state(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _vtol_state_type;
  _vtol_state_type vtol_state;

   typedef uint8_t _landed_state_type;
  _landed_state_type landed_state;



  enum {
    VTOL_STATE_UNDEFINED = 0u,
    VTOL_STATE_TRANSITION_TO_FW = 1u,
    VTOL_STATE_TRANSITION_TO_MC = 2u,
    VTOL_STATE_MC = 3u,
    VTOL_STATE_FW = 4u,
    LANDED_STATE_UNDEFINED = 0u,
    LANDED_STATE_ON_GROUND = 1u,
    LANDED_STATE_IN_AIR = 2u,
    LANDED_STATE_TAKEOFF = 3u,
    LANDED_STATE_LANDING = 4u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::ExtendedState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::ExtendedState_<ContainerAllocator> const> ConstPtr;

}; // struct ExtendedState_

typedef ::mavros_msgs::ExtendedState_<std::allocator<void> > ExtendedState;

typedef boost::shared_ptr< ::mavros_msgs::ExtendedState > ExtendedStatePtr;
typedef boost::shared_ptr< ::mavros_msgs::ExtendedState const> ExtendedStateConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::ExtendedState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::ExtendedState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/luis/catkin_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::ExtendedState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::ExtendedState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::ExtendedState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::ExtendedState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::ExtendedState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::ExtendedState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::ExtendedState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ae780b1800fe17b917369d21b90058bd";
  }

  static const char* value(const ::mavros_msgs::ExtendedState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xae780b1800fe17b9ULL;
  static const uint64_t static_value2 = 0x17369d21b90058bdULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::ExtendedState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/ExtendedState";
  }

  static const char* value(const ::mavros_msgs::ExtendedState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::ExtendedState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Extended autopilot state\n\
#\n\
# http://mavlink.org/messages/common#EXTENDED_SYS_STATE\n\
\n\
uint8 VTOL_STATE_UNDEFINED = 0\n\
uint8 VTOL_STATE_TRANSITION_TO_FW = 1\n\
uint8 VTOL_STATE_TRANSITION_TO_MC = 2\n\
uint8 VTOL_STATE_MC = 3\n\
uint8 VTOL_STATE_FW = 4\n\
\n\
uint8 LANDED_STATE_UNDEFINED = 0\n\
uint8 LANDED_STATE_ON_GROUND = 1\n\
uint8 LANDED_STATE_IN_AIR = 2\n\
uint8 LANDED_STATE_TAKEOFF = 3\n\
uint8 LANDED_STATE_LANDING = 4\n\
\n\
std_msgs/Header header\n\
uint8 vtol_state\n\
uint8 landed_state\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::mavros_msgs::ExtendedState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::ExtendedState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.vtol_state);
      stream.next(m.landed_state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExtendedState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::ExtendedState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::ExtendedState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "vtol_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vtol_state);
    s << indent << "landed_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.landed_state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_EXTENDEDSTATE_H
