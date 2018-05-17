//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import "BRCOperationSubclass.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCMigrateZonePCSOperation : _BRCOperation <BRCOperationSubclass>
{
    NSMutableArray *_interestingZoneIDs;
}

- (void).cxx_destruct;
- (void)main;
- (void)_fetchZonesNeedingMigration:(CDUnknownBlockType)arg1;
- (void)_createCloudDocsZone:(CDUnknownBlockType)arg1;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
