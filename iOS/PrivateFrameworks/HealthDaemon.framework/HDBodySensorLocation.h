//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDBodySensorLocation : HDHealthServiceCharacteristic
{
    long long _sensorLocation;
}

+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;
+ (id)uuid;
@property(nonatomic) long long sensorLocation; // @synthesize sensorLocation=_sensorLocation;
- (id)description;

@end

