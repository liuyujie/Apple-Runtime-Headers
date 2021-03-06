//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNPromise.h"

@class CNFuture, NSString;

@interface CNPromise : NSObject <CNPromise>
{
    CNFuture *_future;
}

@property(readonly) CNFuture *future; // @synthesize future=_future;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)boolErrorCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (CDUnknownBlockType)completionHandlerAdapter;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)finishWithResult:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

