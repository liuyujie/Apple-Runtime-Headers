//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet;

@interface CWInterfaceManager : NSObject
{
    NSMutableDictionary *_managedInterfaces;
    struct IONotificationPort *_interfaceAddedNotificationPort;
    unsigned int _interfaceAddedNotification;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)interfaceManager;
+ (id)interfaceNames;
@property(retain) NSMutableDictionary *managedInterfaces; // @synthesize managedInterfaces=_managedInterfaces;
- (id)description;
@property(readonly) NSSet *interfaces; // @dynamic interfaces;
- (id)interfaceWithName:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end
