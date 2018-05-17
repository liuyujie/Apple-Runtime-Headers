//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSPQuerySourceObserver.h"

@class MSPQuerySource, NSArray, NSObject<OS_dispatch_queue>, NSString, _MSPQueryState;

@interface MSPQuery : NSObject <MSPQuerySourceObserver>
{
    _MSPQueryState *_lastState;
    MSPQuerySource *_source;
    CDUnknownBlockType _changeHandler;
    NSObject<OS_dispatch_queue> *_changeHandlerQueue;
    NSArray *_unmappedContents;
}

@property(readonly, nonatomic) NSArray *unmappedContents; // @synthesize unmappedContents=_unmappedContents;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *changeHandlerQueue; // @synthesize changeHandlerQueue=_changeHandlerQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (void).cxx_destruct;
@property(readonly, getter=_visibleState) _MSPQueryState *visibleState;
- (void)setChangeHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)originalIdentifierForObjectAtIndex:(unsigned int)arg1;
- (id)originalIdentifierForObject:(id)arg1;
@property(readonly) NSArray *contents;
@property(retain, getter=_lastState, setter=_setLastState:) _MSPQueryState *lastState;
- (void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3;
- (id)_initWithSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
