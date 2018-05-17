//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVHomeSharingKit/TVHKMediaServerRequestOperation.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface TVHKMediaCategoryTypesOperation : TVHKMediaServerRequestOperation
{
    NSSet *_mediaCategoryTypes;
    unsigned long long _photoLibraryState;
}

@property(nonatomic) unsigned long long photoLibraryState; // @synthesize photoLibraryState=_photoLibraryState;
@property(copy, nonatomic) NSSet *mediaCategoryTypes; // @synthesize mediaCategoryTypes=_mediaCategoryTypes;
- (void).cxx_destruct;
- (id)_mediaCategoryTypesFromparsedResponse:(id)arg1;
- (void)_handleResponse:(id)arg1;
- (id)initWithMediaServerIdentifier:(id)arg1 databaseID:(unsigned long long)arg2 photoLibraryState:(unsigned long long)arg3;
- (id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2;

@end
