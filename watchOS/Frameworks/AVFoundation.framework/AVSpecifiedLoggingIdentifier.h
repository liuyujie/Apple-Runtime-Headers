//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVLoggingIdentifier.h"

@class AVSpecifiedLoggingIdentifierInternal, NSString;

@interface AVSpecifiedLoggingIdentifier : NSObject <AVLoggingIdentifier>
{
    AVSpecifiedLoggingIdentifierInternal *_specifiedLoggingIdentifier;
}

@property(readonly, copy) NSString *description;
@property(readonly) NSString *name;
- (void)finalize;
- (void)dealloc;
- (id)initWithSpecifiedName:(id)arg1;
- (id)makeDerivedIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

