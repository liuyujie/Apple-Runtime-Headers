//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSBTLEPeripheral;

__attribute__((visibility("hidden")))
@interface CABTMIDIIncompleteConnectionInfo : NSObject
{
    _Bool _connecting;
    unsigned long long _timeOutInterval;
    AMSBTLEPeripheral *_peripheral;
}

@property(retain, nonatomic) AMSBTLEPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property unsigned long long timeOutInterval; // @synthesize timeOutInterval=_timeOutInterval;
@property(getter=isConnecting) _Bool connecting; // @synthesize connecting=_connecting;
- (id)initWithPeripheral:(id)arg1 isConnecting:(_Bool)arg2;

@end
