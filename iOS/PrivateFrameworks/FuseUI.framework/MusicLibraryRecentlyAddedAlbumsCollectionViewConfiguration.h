//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FuseUI/MusicLibraryAlbumsCollectionViewConfiguration.h>

@interface MusicLibraryRecentlyAddedAlbumsCollectionViewConfiguration : MusicLibraryAlbumsCollectionViewConfiguration
{
    unsigned long long _entityLimit;
}

+ (unsigned long long)defaultEntityLimit;
@property(readonly, nonatomic) unsigned long long entityLimit; // @synthesize entityLimit=_entityLimit;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (_Bool)canPreviewEntityValueContext:(id)arg1;
- (id)loadEntityViewDescriptor;
- (id)initWithEntityLimit:(unsigned long long)arg1;
- (id)initForMainAlbumsList:(_Bool)arg1 includeCompilations:(_Bool)arg2;
- (id)init;

@end
