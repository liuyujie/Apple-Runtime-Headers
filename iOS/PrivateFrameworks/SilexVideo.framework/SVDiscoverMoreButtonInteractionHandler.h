//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVInteractionHandling.h"

@class NSString;

@interface SVDiscoverMoreButtonInteractionHandler : NSObject <SVInteractionHandling>
{
    id <SVDiscoverMoreInteractionHandling> _discoverMoreInteractionHandler;
}

@property(readonly, nonatomic) id <SVDiscoverMoreInteractionHandling> discoverMoreInteractionHandler; // @synthesize discoverMoreInteractionHandler=_discoverMoreInteractionHandler;
- (void).cxx_destruct;
- (void)handleInteractionWithContext:(id)arg1;
- (id)initWithDiscoverMoreInteractionHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

