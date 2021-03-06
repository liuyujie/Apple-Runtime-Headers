//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

#import "EKDefaultPropertiesLoading.h"

@class NSString;

@interface CADEventCreatedFromSuggestionPredicate : EKPredicate <EKDefaultPropertiesLoading>
{
    NSString *_opaqueKey;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *opaqueKey; // @synthesize opaqueKey=_opaqueKey;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (id)predicateFormat;
- (id)initWithOpaqueKey:(id)arg1;
-     // Error parsing type: @12@0:4^{CalDatabase={__CFRuntimeBase=IAI}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}8, name: copyMatchingItemsWithDatabase:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

