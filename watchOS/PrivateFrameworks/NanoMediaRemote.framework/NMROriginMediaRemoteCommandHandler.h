//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMROriginCommandHandler.h"

@class NMROrigin, NSString;

@interface NMROriginMediaRemoteCommandHandler : NSObject <NMROriginCommandHandler>
{
    NSString *_applicationBundleIdentifier;
    NMROrigin *_origin;
}

@property(readonly, nonatomic) NMROrigin *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 launchApp:(_Bool)arg3;
- (void)_updateApplicationBundleIdentifier;
- (id)initWithOrigin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

