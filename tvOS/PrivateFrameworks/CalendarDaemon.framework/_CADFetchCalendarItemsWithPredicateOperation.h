//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSPredicate;

__attribute__((visibility("hidden")))
@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation
{
    NSPredicate *_predicate;
    int _entityType;
    // Error parsing type: ^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}, name: _database
    int _fetchIdentifier;
    CDUnknownBlockType _completion;
}

@property(readonly, nonatomic) int fetchIdentifier; // @synthesize fetchIdentifier=_fetchIdentifier;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)dealloc;
-     // Error parsing type: @48@0:8@16i24^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}28i36@?40, name: initWithPredicate:entityType:database:fetchIdentifier:completionHandler:

@end
