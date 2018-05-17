//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import "SAConditionallyMutatingClientBoundCommand.h"

@class NSArray, NSString, SASendCommands;

@interface SAUIAddViews : SABaseClientBoundCommand <SAConditionallyMutatingClientBoundCommand>
{
}

+ (id)addViewsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addViews;
@property(copy, nonatomic) NSArray *views;
@property(nonatomic) _Bool temporary;
@property(nonatomic) _Bool scrollToTop;
@property(nonatomic) _Bool requiresResponse;
@property(retain, nonatomic) SASendCommands *refreshCommand;
@property(nonatomic) _Bool mutatingCommand;
@property(copy, nonatomic) NSString *displayTarget;
@property(copy, nonatomic) NSString *dialogPhase;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSString *refId;
@property(readonly) Class superclass;

@end
