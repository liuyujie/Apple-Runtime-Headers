//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSSet, TDMultisizeImageSetProduction;

@interface TDMultisizeImageSetRenditionSpec : TDRenditionSpec
{
}

- (_Bool)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned int)arg2 document:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSSet *multisizeImageRenditions; // @dynamic multisizeImageRenditions;
@property(retain, nonatomic) TDMultisizeImageSetProduction *multisizeImageSetProduction; // @dynamic multisizeImageSetProduction;

@end
