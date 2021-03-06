//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BrightnessSystemClientExportedObj, NSCondition, NSMutableArray, NSXPCConnection;

@interface BrightnessSystemClientInternal : NSObject
{
    NSXPCConnection *_connection;
    id _remote;
    BrightnessSystemClientExportedObj *exportedObj;
    NSMutableArray *_clientProperties;
    NSCondition *copyPropertyForKeyWaitCondition;
    BOOL copyPropertyForKeyCompleted;
}

- (void)removeKeyFromClientProperties:(id)arg1;
- (void)addKeyToClientProperties:(id)arg1;
- (void)removePropertyFromNotification:(id)arg1;
- (void)addPropertyForNotification:(id)arg1;
- (void)removePropertiesFromNotification:(id)arg1;
- (void)addPropertiesForNotification:(id)arg1;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1 forProperties:(id)arg2;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)stopXpcService;

@end

