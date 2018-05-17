//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNAutocompleteSourceInclusionPolicy.h"

@class NSString;

@interface _CNAutocompleteEntitlementSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>
{
}

@property(readonly) BOOL includeSupplementalResults;
@property(readonly) BOOL includeCalendarServers;
@property(readonly) BOOL includeDirectoryServers;
@property(readonly) BOOL includePredictions;
@property(readonly) BOOL includeSuggestions;
@property(readonly) BOOL includeRecents;
@property(readonly) BOOL includeContacts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
