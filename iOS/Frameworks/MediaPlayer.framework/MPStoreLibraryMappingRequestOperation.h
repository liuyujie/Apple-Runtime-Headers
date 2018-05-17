//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView, NSArray;

@interface MPStoreLibraryMappingRequestOperation : MPAsyncOperation
{
    MPMediaLibraryView *_libraryView;
    Class _modelClass;
    NSArray *_identifierSets;
    CDUnknownBlockType _responseHandler;
}

+ (_Bool)supportsModelClass:(Class)arg1;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSArray *identifierSets; // @synthesize identifierSets=_identifierSets;
@property(nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(copy, nonatomic) MPMediaLibraryView *libraryView; // @synthesize libraryView=_libraryView;
- (void).cxx_destruct;
- (void)execute;

@end
