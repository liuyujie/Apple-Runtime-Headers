//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPersistentHistoryToken;

@interface RMHistoryAnalyzer : NSObject
{
    NSPersistentHistoryToken *_finalToken;
}

+ (id)_uninterestingAttributes;
@property(readonly, nonatomic) NSPersistentHistoryToken *finalToken; // @synthesize finalToken=_finalToken;
- (void).cxx_destruct;
- (id)changesForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 error:(id *)arg4;
- (_Bool)isChangeInteresting:(id)arg1 interestingEntityNames:(id)arg2;
- (_Bool)newIsChangeInteresting:(id)arg1;
- (id)deltasForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 ignoreAuthor:(id)arg4 finalToken:(id *)arg5 interestingEntityNames:(id)arg6 error:(id *)arg7;
- (id)newDeltasForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 ignoreAuthor:(id)arg4 finalToken:(id *)arg5 error:(id *)arg6;

@end

