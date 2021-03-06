//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLKObservable.h"
#import "TLKObserver.h"

@class NSString;

@interface TLKObject : NSObject <TLKObservable, TLKObserver>
{
    _Bool inBatchUpdate;
    id <TLKObserver> observer;
}

@property _Bool inBatchUpdate; // @synthesize inBatchUpdate;
@property __weak id <TLKObserver> observer; // @synthesize observer;
- (void).cxx_destruct;
- (void)propertiesDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

