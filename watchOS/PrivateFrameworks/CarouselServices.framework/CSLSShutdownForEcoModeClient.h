//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface CSLSShutdownForEcoModeClient : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_dropConnection;
- (id)_createConnectionIfNecessary;
- (void)shutdownForEcoMode:(id)arg1;
- (void)dealloc;
- (id)init;

@end

