//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCKZoneCommand.h"

@class NSString;

@interface SCWatchlistReplaceSymbolCommand : NSObject <SCKZoneCommand>
{
    NSString *_oldSymbol;
    NSString *_replacementSymbol;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *replacementSymbol; // @synthesize replacementSymbol=_replacementSymbol;
@property(readonly, copy, nonatomic) NSString *oldSymbol; // @synthesize oldSymbol=_oldSymbol;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithOldSymbol:(id)arg1 replacementSymbol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
