//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLSButtonListenerClientInterface.h"

@class CSLSButtonListenerCache, NSString, NSXPCConnection;

@interface CSLSButtonListener : NSObject <CSLSButtonListenerClientInterface>
{
    NSXPCConnection *_connection;
    CSLSButtonListenerCache *_handlerCache;
}

@property(retain) CSLSButtonListenerCache *handlerCache; // @synthesize handlerCache=_handlerCache;
- (void).cxx_destruct;
- (void)handleButtons:(unsigned int)arg1 event:(unsigned int)arg2 firstDownTime:(unsigned long long)arg3 lastUpTime:(unsigned long long)arg4;
- (void)removeHandlerForButtons:(unsigned int)arg1 event:(unsigned int)arg2;
- (void)setHandlerForButtons:(unsigned int)arg1 event:(unsigned int)arg2 handlerWithTimestamps:(CDUnknownBlockType)arg3;
- (void)setHandlerForButtons:(unsigned int)arg1 event:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
