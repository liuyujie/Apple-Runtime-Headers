//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMLibraryPlist, NSObject<OS_dispatch_queue>;

@interface BLLibrary : NSObject
{
    IMLibraryPlist *_booksPlist;
    IMLibraryPlist *_purchasedPlist;
    IMLibraryPlist *_managedPlist;
    IMLibraryPlist *_sharedPlist;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)defaultBookLibrary;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) IMLibraryPlist *sharedPlist; // @synthesize sharedPlist=_sharedPlist;
@property(retain, nonatomic) IMLibraryPlist *managedPlist; // @synthesize managedPlist=_managedPlist;
@property(retain, nonatomic) IMLibraryPlist *purchasedPlist; // @synthesize purchasedPlist=_purchasedPlist;
@property(retain, nonatomic) IMLibraryPlist *booksPlist; // @synthesize booksPlist=_booksPlist;
- (void).cxx_destruct;
- (id)_perUserBookURLForBookURL:(id)arg1;
- (_Bool)_isShareableBook:(id)arg1;
- (_Bool)_isMultiUser;
- (id)_bookItemFromPermlink:(id)arg1 error:(id *)arg2;
- (id)_bookItemFromStoreID:(id)arg1 permlink:(id)arg2 error:(id *)arg3;
- (id)_findBookItemWithTestBlock:(CDUnknownBlockType)arg1 foundWhere:(long long *)arg2;
- (id)_list:(id)arg1 testBlock:(CDUnknownBlockType)arg2;
- (id)_allPlists;
- (id)bookIdentifierFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)_removeBookFromLibraryWithPath:(id)arg1 error:(id *)arg2;
- (_Bool)removeBookFromLibraryWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)_addBookItemToEduContainer:(id)arg1 error:(id *)arg2;
- (id)allBookItems;
- (id)_bookItemsFromPlist:(id)arg1;
- (id)init;

@end

