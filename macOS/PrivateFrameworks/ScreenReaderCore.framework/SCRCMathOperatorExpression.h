//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression
{
    unsigned short _operatorChar;
}

@property(readonly, nonatomic) unsigned short operatorChar; // @synthesize operatorChar=_operatorChar;
- (id)mathMLString;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)latexFormatStringAsOver;
- (BOOL)isFenceDelimiter;
- (BOOL)isOperationSymbol;
- (BOOL)isTermSeparator;
- (BOOL)isEllipsis;
- (BOOL)isNaturalSuperscript;
- (BOOL)_isMinusSign;
- (BOOL)_isInvisibleCharacter;
- (BOOL)_isRingOperator;
- (BOOL)canBeUsedWithRange;
- (BOOL)_isSummation;
- (BOOL)_isUnionOrIntersection;
- (BOOL)_isIntegral;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

