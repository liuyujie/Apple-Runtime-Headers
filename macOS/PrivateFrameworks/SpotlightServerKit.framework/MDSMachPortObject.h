//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpotlightServerKit/MDSObject.h>

@class MDSMachSubsystem;

@interface MDSMachPortObject : MDSObject
{
    MDSMachSubsystem *_machSubsystem;
}

+ (void)setMaxMachMsgSize:(unsigned int)arg1;
+ (unsigned int)maxMachMsgSize;
+ (void)setDispatchMachMsgOptions:(int)arg1;
+ (int)dispatchMachMsgOptions;
- (id)connection;
- (void)setMachPort:(unsigned int)arg1;
- (unsigned int)machPort;
- (void)invalidateRunLoopSources;
- (void)addRunLoopSources;
- (void)dealloc;
- (id)initWithDeferredShutdown:(BOOL)arg1;

@end
