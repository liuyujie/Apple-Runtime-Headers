//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSString;

@interface NTKPhotosReader : NSObject <NSFastEnumeration>
{
    NSString *_resourceDirectory;
    id <NTKPhotosReaderDelegate> _delegate;
    NSString *_assetCollection;
    unsigned long _mutationCount;
}

+ (id)readerForMemoriesWithResourceDirectory:(id)arg1;
+ (id)readerForSyncedAlbumWithResourceDirectory:(id)arg1;
+ (id)readerForResourceDirectory:(id)arg1;
@property(nonatomic) unsigned long mutationCount; // @synthesize mutationCount=_mutationCount;
@property(retain, nonatomic) NSString *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(nonatomic) __weak id <NTKPhotosReaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *resourceDirectory; // @synthesize resourceDirectory=_resourceDirectory;
- (void).cxx_destruct;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)lastObject;
- (id)firstObject;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int count;
- (id)initWithResourceDirectory:(id)arg1;

@end

