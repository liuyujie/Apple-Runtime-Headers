//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MapsSuggestionsDeduper.h"

@class NSString;

@interface MapsSuggestionsBaseDeduper : NSObject <MapsSuggestionsDeduper>
{
}

+ (_Bool)isEnabled;
- (_Bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

