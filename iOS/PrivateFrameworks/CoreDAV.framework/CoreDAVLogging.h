//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CoreDAVLogging : NSObject
{
    NSMutableDictionary *_logDelegates;
    NSObject<OS_dispatch_queue> *_delegateMuckingQueue;
}

+ (id)sharedLogging;
- (void).cxx_destruct;
- (void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(struct __va_list_tag [1])arg4;
- (id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1;
- (_Bool)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;
- (_Bool)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;
- (id)_delegatesToLogForProvider:(id)arg1;
- (void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (id)init;

@end
