//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVLoggingIdentifier.h"

@class AVAssetLoggingIdentifierInternal, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetLoggingIdentifier : NSObject <AVLoggingIdentifier>
{
    AVAssetLoggingIdentifierInternal *_priv;
}

- (id)makeDerivedIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *name;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

