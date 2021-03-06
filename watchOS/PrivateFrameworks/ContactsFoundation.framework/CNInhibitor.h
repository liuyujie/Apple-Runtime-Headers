//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNInhibitor.h"

@class NSString;

@interface CNInhibitor : NSObject <CNInhibitor>
{
    _Bool _debugIsInhibiting;
}

+ (id)os_transactionInhibitorWithLabel:(id)arg1;
+ (id)suddenTerminationInhibitorWithProcessInfo:(id)arg1;
+ (id)suddenTerminationInhibitor;
@property(nonatomic) _Bool debugIsInhibiting; // @synthesize debugIsInhibiting=_debugIsInhibiting;
- (void)stop;
- (void)start;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

