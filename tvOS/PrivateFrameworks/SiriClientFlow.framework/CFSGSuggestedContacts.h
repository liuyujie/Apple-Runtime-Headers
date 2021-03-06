//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SADomainCommand.h"

#import "SAAceSerializable.h"

@class NSArray, NSString;

@interface CFSGSuggestedContacts : SADomainCommand <SAAceSerializable>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestedContactsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestedContacts;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *suggestedContactsWithOrigin;
@property(copy, nonatomic) NSArray *suggestContactMatches;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

