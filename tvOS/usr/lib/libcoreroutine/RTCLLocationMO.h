//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate;

@interface RTCLLocationMO : NSManagedObject
{
}

+ (id)managedObjectWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 horizontalAccuracy:(double)arg4 verticalAccuracy:(double)arg5 course:(double)arg6 speed:(double)arg7 timestamp:(id)arg8 inManagedObjectContext:(id)arg9;
+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) double altitude; // @dynamic altitude;
@property(nonatomic) double course; // @dynamic course;
@property(nonatomic) double horizontalAccuracy; // @dynamic horizontalAccuracy;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) double speed; // @dynamic speed;
@property(copy, nonatomic) NSDate *timestamp; // @dynamic timestamp;
@property(nonatomic) double verticalAccuracy; // @dynamic verticalAccuracy;

@end

