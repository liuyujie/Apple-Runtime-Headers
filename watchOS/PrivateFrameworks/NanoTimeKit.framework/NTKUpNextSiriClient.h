//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface NTKUpNextSiriClient : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_performOnRemoteObject:(CDUnknownBlockType)arg1;
- (void)completedRequestWithDomain:(id)arg1;
- (void)dealloc;
- (id)init;

@end
