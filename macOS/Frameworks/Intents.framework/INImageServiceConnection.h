//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface INImageServiceConnection : NSObject
{
    NSXPCConnection *_underlyingConnection;
}

+ (id)sharedConnection;
- (void).cxx_destruct;
- (void)loadImageDataAndSizeForImage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_init;
- (void)dealloc;
- (id)init;

@end
