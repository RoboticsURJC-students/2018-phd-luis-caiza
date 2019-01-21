// Generated by gencpp from file mavros_msgs/HilGPS.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_HILGPS_H
#define MAVROS_MSGS_MESSAGE_HILGPS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geographic_msgs/GeoPoint.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct HilGPS_
{
  typedef HilGPS_<ContainerAllocator> Type;

  HilGPS_()
    : header()
    , fix_type(0)
    , geo()
    , eph(0)
    , epv(0)
    , vel(0)
    , vn(0)
    , ve(0)
    , vd(0)
    , cog(0)
    , satellites_visible(0)  {
    }
  HilGPS_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , fix_type(0)
    , geo(_alloc)
    , eph(0)
    , epv(0)
    , vel(0)
    , vn(0)
    , ve(0)
    , vd(0)
    , cog(0)
    , satellites_visible(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _fix_type_type;
  _fix_type_type fix_type;

   typedef  ::geographic_msgs::GeoPoint_<ContainerAllocator>  _geo_type;
  _geo_type geo;

   typedef uint16_t _eph_type;
  _eph_type eph;

   typedef uint16_t _epv_type;
  _epv_type epv;

   typedef uint16_t _vel_type;
  _vel_type vel;

   typedef int16_t _vn_type;
  _vn_type vn;

   typedef int16_t _ve_type;
  _ve_type ve;

   typedef int16_t _vd_type;
  _vd_type vd;

   typedef uint16_t _cog_type;
  _cog_type cog;

   typedef uint8_t _satellites_visible_type;
  _satellites_visible_type satellites_visible;





  typedef boost::shared_ptr< ::mavros_msgs::HilGPS_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::HilGPS_<ContainerAllocator> const> ConstPtr;

}; // struct HilGPS_

typedef ::mavros_msgs::HilGPS_<std::allocator<void> > HilGPS;

typedef boost::shared_ptr< ::mavros_msgs::HilGPS > HilGPSPtr;
typedef boost::shared_ptr< ::mavros_msgs::HilGPS const> HilGPSConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::HilGPS_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::HilGPS_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mavros_msgs::HilGPS_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::HilGPS_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::HilGPS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::HilGPS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::HilGPS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::HilGPS_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::HilGPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "313b3baf2319db196fa18376a4900a7b";
  }

  static const char* value(const ::mavros_msgs::HilGPS_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x313b3baf2319db19ULL;
  static const uint64_t static_value2 = 0x6fa18376a4900a7bULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::HilGPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/HilGPS";
  }

  static const char* value(const ::mavros_msgs::HilGPS_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::HilGPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# HilControls.msg\n\
#\n\
# ROS representation of MAVLink HIL_GPS\n\
# See mavlink message documentation here:\n\
# https://pixhawk.ethz.ch/mavlink/#HIL_GPS\n\
\n\
std_msgs/Header header\n\
uint8 fix_type\n\
geographic_msgs/GeoPoint geo\n\
uint16 eph\n\
uint16 epv\n\
uint16 vel\n\
int16 vn\n\
int16 ve\n\
int16 vd\n\
uint16 cog\n\
uint8 satellites_visible\n\
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
\n\
================================================================================\n\
MSG: geographic_msgs/GeoPoint\n\
# Geographic point, using the WGS 84 reference ellipsoid.\n\
\n\
# Latitude [degrees]. Positive is north of equator; negative is south\n\
# (-90 <= latitude <= +90).\n\
float64 latitude\n\
\n\
# Longitude [degrees]. Positive is east of prime meridian; negative is\n\
# west (-180 <= longitude <= +180). At the poles, latitude is -90 or\n\
# +90, and longitude is irrelevant, but must be in range.\n\
float64 longitude\n\
\n\
# Altitude [m]. Positive is above the WGS 84 ellipsoid (NaN if unspecified).\n\
float64 altitude\n\
";
  }

  static const char* value(const ::mavros_msgs::HilGPS_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::HilGPS_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.fix_type);
      stream.next(m.geo);
      stream.next(m.eph);
      stream.next(m.epv);
      stream.next(m.vel);
      stream.next(m.vn);
      stream.next(m.ve);
      stream.next(m.vd);
      stream.next(m.cog);
      stream.next(m.satellites_visible);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HilGPS_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::HilGPS_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::HilGPS_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "fix_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fix_type);
    s << indent << "geo: ";
    s << std::endl;
    Printer< ::geographic_msgs::GeoPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.geo);
    s << indent << "eph: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.eph);
    s << indent << "epv: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.epv);
    s << indent << "vel: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.vel);
    s << indent << "vn: ";
    Printer<int16_t>::stream(s, indent + "  ", v.vn);
    s << indent << "ve: ";
    Printer<int16_t>::stream(s, indent + "  ", v.ve);
    s << indent << "vd: ";
    Printer<int16_t>::stream(s, indent + "  ", v.vd);
    s << indent << "cog: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.cog);
    s << indent << "satellites_visible: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.satellites_visible);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_HILGPS_H
