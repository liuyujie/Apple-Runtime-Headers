//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLRecordChange;

@protocol PLSyncableObject <NSObject>
@property(nonatomic) short cloudLocalState;
@property(readonly, retain, nonatomic) id localID;
- (CPLRecordChange *)cplFullRecord;
@end
