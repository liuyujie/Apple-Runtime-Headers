//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@interface RTDevice : NSObject
{
    NSUUID *_identifier;
    NSString *_deviceName;
    NSString *_deviceClass;
    NSString *_deviceModel;
}

@property(readonly, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(readonly, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDeviceMO:(id)arg1;

@end
