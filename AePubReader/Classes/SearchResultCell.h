//
//  SearchResultCell.h
//  AePubReader
//
//  Created by Federico Frappi on 06/05/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface SearchResultCell : UITableViewCell {
    UILabel* foundTextLabel;
    UILabel* positionInfoLabel;
}

@property (nonatomic, retain) IBOutlet UILabel *foundTextLabel, *positionInfoLabel;

@end
