//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSSQLiteStore.h"

@interface WBSFaviconProviderDatabaseController : WBSSQLiteStore
{
}

- (void)_generateStatementsForQuery:(id)arg1 arguments:(id)arg2 statementCallback:(CDUnknownBlockType)arg3;
- (void)_deleteAllPageAndIconEntries;
- (void)_deleteIconsWithUUIDsFromIconInfo:(id)arg1;
- (void)_deleteIconWithUUIDFromIconInfo:(id)arg1;
- (void)_deletePageURLsWithUUIDFromPageInfo:(id)arg1;
- (_Bool)_hasPageURLsForIconUUID:(id)arg1;
- (void)_deletePageURLs:(id)arg1;
- (void)_deletePageURL:(id)arg1;
- (id)_setTimestampToNowForIconUUID:(id)arg1;
- (id)_setIconUUID:(id)arg1 forIconURLString:(id)arg2 size:(struct CGSize)arg3;
- (void)_setPageURL:(id)arg1 toIconUUID:(id)arg2;
- (id)_findOrphansFromIconUUIDs:(id)arg1;
- (id)_fetchPageURLStringsWithPredicate:(id)arg1;
- (id)_fetchAllPageURLStrings;
- (id)_fetchDateAddedAndURLForIconWithUUID:(id)arg1;
- (id)_fetchDateAddedForIconWithURLString:(id)arg1;
- (id)_fetchIconUUIDAndDateAddedForIconURLString:(id)arg1;
- (id)_fetchIconUUIDsForPageURLStrings:(id)arg1;
- (id)_fetchIconUUIDForPageURLString:(id)arg1;
- (void)fetchPageURLStringsWithPrefixesIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)firstIconInfoMatchingIconURLStringIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_firstIconUUIDForPageURLStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)firstIconInfoMatchingPageURLStringIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)firstIconUUIDMatchingPageURLStringIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)iconInfoForIconURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)iconInfoForPageURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllKnownPageURLStringsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllPageURLStringsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllDataForIconUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePageURLStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePageURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)linkPageURLString:(id)arg1 toExistingIconURLString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)linkAndUpdateTimestampForIconWithPageURLString:(id)arg1 iconURLString:(id)arg2 iconSize:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_createFreshDatabaseSchema;
- (int)_currentSchemaVersion;

@end
