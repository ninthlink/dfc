<?php
/**
 * @file
 * Hooks provided by the Commerce Discount Extra module.
 */


/**
 * Allows modules to alter the manifest used to calculated per-quantity discount
 * offers determined by product IDs.
 *
 * The manifest is an array of line item wrappers representing products on an
 * order with each product line item resulting in one item in the manifest array
 * per quantity of the line item. Thus, one line item on an order may result in
 * multiple items in the manifest array.
 *
 * To determine if a per-quantity discount (a.k.a. BOGO) should apply to an
 * order, the discount module iterates over the manifest looking first for the
 * required number of trigger products and then looking for any potential offer
 * products that should result in an order being discounted.
 *
 * This hook allows modules to remove items from the manifest based on their own
 * conditions prior to the manifest being processed, essentially letting a site
 * developer disqualify a product from being a trigger product or offer product
 * based on some condition that isn't accounted for in the default UI.
 */
function hook_commerce_discount_per_quantity_manifest_alter(&$manifest) {
  // Exclude product 3 from the manifest (for whatever reason).
  foreach ($manifest as $key => $line_item_wrapper) {
    if ($line_item_wrapper->commerce_product->raw() == 3) {
      unset($manifest[$key]);
    }
  }
}

/**
 * Allows modules to alter the manifest used to calculated per-quantity discount
 * offers determined by product IDs.
 *
 * The manifest is an array of line item wrappers representing products on an
 * order with each product line item resulting in one item in the manifest array
 * per quantity of the line item. Thus, one line item on an order may result in
 * multiple items in the manifest array.
 *
 * To determine if a per-quantity category discount (a.k.a. BOGO from specified
 * product categories) should apply to an order, the discount module iterates
 * over the manifest looking first for the required number of products in
 * trigger categories and then looking for any products in offer categories that
 * should result in an order being discounted.
 *
 * This hook allows modules to remove items from the manifest based on their own
 * conditions prior to the manifest being processed, essentially letting a site
 * developer disqualify a product from being a trigger product or offer product
 * based on some condition that isn't accounted for in the default UI.
 */
function hook_commerce_discount_per_quantity_category_manifest_alter(&$manifest) {
  // Exclude product 3 from the manifest (for whatever reason).
  foreach ($manifest as $key => $line_item_wrapper) {
    if ($line_item_wrapper->commerce_product->raw() == 3) {
      unset($manifest[$key]);
    }
  }
}
