//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CNCDInfoFetcher : NSObject
{
}

+ (id)_persistentStoresForAccountsWithIdentifiers:(id)arg1 fromManagedObjectContext:(id)arg2;
+ (id)_accountIdentifierFromPersistentStoreURL:(id)arg1;
+ (id)allRemoteInfosWithPersistenceStack:(id)arg1 forAccountsWithIdentifiers:(id)arg2 error:(id *)arg3;
+ (id)allInfosWithPersistenceStack:(id)arg1 forAccountsWithIdentifiers:(id)arg2 error:(id *)arg3;
+ (id)allInfosWithManagedObjectContext:(id)arg1 inStores:(id)arg2 error:(id *)arg3;

@end
