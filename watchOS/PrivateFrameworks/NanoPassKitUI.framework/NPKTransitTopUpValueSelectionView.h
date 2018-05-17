//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoPassKitUI/NPKValueSelectionView.h>

@class NPKPassDescription, NSDecimalNumber, NSNumberFormatter, PKPaymentPassAction;

@interface NPKTransitTopUpValueSelectionView : NPKValueSelectionView
{
    PKPaymentPassAction *_topUpAction;
    NSDecimalNumber *_cardBalance;
    NPKPassDescription *_passDescription;
    NSNumberFormatter *_balanceFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *balanceFormatter; // @synthesize balanceFormatter=_balanceFormatter;
@property(retain, nonatomic) NPKPassDescription *passDescription; // @synthesize passDescription=_passDescription;
@property(retain, nonatomic) NSDecimalNumber *cardBalance; // @synthesize cardBalance=_cardBalance;
@property(retain, nonatomic) PKPaymentPassAction *topUpAction; // @synthesize topUpAction=_topUpAction;
- (void).cxx_destruct;
- (void)setShouldDisplayActivityIndicator:(_Bool)arg1;
- (id)annotationStringWithValue:(id)arg1;
- (id)_newAcceptButton;
- (short)_roundingScale;
- (id)initWithPassDescription:(id)arg1 action:(id)arg2;

@end
