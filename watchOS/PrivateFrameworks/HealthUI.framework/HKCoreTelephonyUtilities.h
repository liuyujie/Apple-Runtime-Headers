//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HKCoreTelephonyUtilities : NSObject
{
    struct __CTServerConnection *_ctServerConnection;
    NSObject<OS_dispatch_queue> *_ctServerQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ctServerQueue; // @synthesize ctServerQueue=_ctServerQueue;
- (void).cxx_destruct;
- (struct __CTServerConnection *)ctServerConnection;
- (_Bool)isEmergencyServicePhoneNumber:(id)arg1;
- (void)dealloc;
- (id)init;

@end

